# Program to read excel sheet

import xlrd 
loc = ("path of file") # Location of excel sheet
wb = xlrd.open_workbook(loc) 
sheet = wb.sheet_by_index(0) # Sheet number
print(sheet.cell_value(1,3))
print(sheet.nrows)
print(sheet.ncols)

for i in range(sheet,ncols):
    print(sheet.cell_value(0,i))

print(sheet.row_values(1))
print(sheet.col_values(1))