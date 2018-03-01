class Shape:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.description = 'Description unavailable'
        self.author = 'Nobody'
    
    def area(self):
        return self.x * self.y

    def describe(self, text):
        self.description = text
