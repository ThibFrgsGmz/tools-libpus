# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

"""This module provides a GUI to interface with the ESROCOS PUS services.

The PusGui module implements a GUI to exchange TC/TM with an ESROCOS 
application. The GUI follows the Model-View-Controller (MVC) pattern.
The structure of the software is the following:

 * PusGUI
 ** Controller: the MVC Controller part
 ** Model: the MVC Model part
 ** Utilities: utility functions to manage communication and TM/TC processing
 ** View : the MVC View part

The ESROCOS PUS library is missionized, i.e., particularized 
for each mission/application, with the parameters, events, software 
functions, etc., specific to the application. In order to make the 
GUI aware of these specializations, the PusGui module loads dynamically
the mission-specific elements using the Python "builtins" module:

 * builtins.ESROCOS_PUSGUI_MODULE: the name of the mission-specific Python module 
   generated by the ESROCOS PUS library (e.g., esrocos_pus_myMission).
 * builtins.ESROCOS_PUSGUI_APIDJSON: a JSON file defining the APID (PUS Application 
   Identifier) denoting the GUI application as TM/TC source or destination.
 * builtins.ESROCOS_PUSGUI_SERVICES: a TXT file defining the PUS service numbers.
"""

import os, sys
from PySide import QtGui
from importlib import import_module
import builtins


def check_configuration():
    '''Check that the required configuration values are defined with "builtins"'''
    return hasattr(builtins, "ESROCOS_PUSGUI_MODULE") and hasattr(builtins, "ESROCOS_PUSGUI_CONFIG")

def usage():
    """Print error message."""
    print("""\
Configuration value is missing. The following values must be set using the "builtins" module:
 - builtins.ESROCOS_PUSGUI_MODULE: name of the mission-specific PUS services module (e.g., esrocos_pus_<myMission>)
 - builtins.ESROCOS_PUSGUI_APIDJSON: a JSON file defining the APID for the PUS GUI
 - builtins.ESROCOS_PUSGUI_SERVICES: a TXT file defining the PUS service numbers\
""")

def load_pus_module(module_name):
    """Load the mission-specific Python module created by the ESROCOS PUS library"""
    return import_module(builtins.ESROCOS_PUSGUI_MODULE)

# Dynamically load the missionized PUS library (must be done before importing submodules)
if check_configuration():
    try:
        pb = load_pus_module(builtins.ESROCOS_PUSGUI_MODULE)
    except Exception as e:
        print("Cannot load ESROCOS PUS Python module: {}.".format(str(e)))
        sys.exit(2)
else:
    usage()
    sys.exit(1)

from .Model import App
from .Controller import MainViewController
from .Views import MainView
from .Utilities import PacketTranslator


def create():
    """Create the PUS GUI application."""
    gui = QtGui.QApplication(())
    app = App()
    view = MainView()
    controller = MainViewController(app, view)
    controller.show()

    # TESTING
    
    # for i in range(12):
    #     packet = pb.pusPacket_t()
    #     pb.ret_packets(packet, i)
    #     app.add(pt.packet2json(packet), packet)
    #     packet0 = pb.pusPacket_t()
    #     pb.pus_tc_17_1_createConnectionTestRequest(packet0, 0, 0)
    #     packet = pb.pusPacket_t()
    #     pb.pus_tm_1_1_createAcceptanceReportSuccess(packet, 0, 0, packet0)
    #     app.add(pt.packet2json(packet), packet)

    code = gui.exec_()
    sys.exit(code)

