class Date:
    def __init__(self, day=1, month=1, year=1900):
        if self.is_date_form(day, month, year):
            self.day = day
            self.month = month
            self.year = year
        else:
            self.day = 1
            self.month = 1
            self.year = 1900

    def __str__(self):
        return f"{self.day}/{self.month}/{self.year}"

    @staticmethod
    def is_leap_year(year):
        return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)

    @staticmethod
    def is_date_form(d, m, y):
        if m < 1 or m > 12 or d < 1:
            return False
        if m in [1, 3, 5, 7, 8, 10, 12]:
            return d <= 31
        elif m in [4, 6, 9, 11]:
            return d <= 30
        elif m == 2:
            return d <= 29 if Date.is_leap_year(y) else d <= 28
        return True
