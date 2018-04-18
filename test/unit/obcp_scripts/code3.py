

class ObcpTest(Obcp):
        
    def main(self):
        print("- Main body ", self.id)
        
        self.obcp_wait_interval_time(0.5)
        
        while self.obcp_get_next_event() != None:
            pass
        
        print("Activate :",  self.obcp_activate_obcp("OBCP_HI"))
        
        print("Waitting finish:", self.obcp_wait_obcp_finish("OBCP_HI"))

        
a = ObcpTest("OBCP_TEST")
a.run()