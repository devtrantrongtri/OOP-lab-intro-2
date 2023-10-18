from date import Date
from employee import Employee

if __name__ == "__main__":
    birth = Date(7, 4, 1949)
    hire = Date(3, 12, 1988)
    manager = Employee("Bob", "Blue", birth, hire)
    print()
    manager.print()
    print("\nTest Date constructor with invalid values:")
    lastDayOff = Date(14, 35, 1994)  # invalid month and day
    print(lastDayOff)
