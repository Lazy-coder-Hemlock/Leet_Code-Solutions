class MyCalendar:

    def __init__(self):
        self.k=[]
        

    def book(self, start: int, end: int) -> bool:
        for k,v in self.k:
            if end>k and v>start:
                return False
        self.k.append((start,end))
        return True
# Your MyCalendar object will be instantiated and called as such:
# obj = MyCalendar()
# param_1 = obj.book(start,end)
