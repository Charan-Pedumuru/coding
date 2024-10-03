months={

    'Jan':'January',
    'Feb':'February',
    'Mar':'March',
    'Apr':'April',
    'May':'May',
    'Jun':'June',
    'Jul':'July',
    'Aug':'August',
    'Sep':'September',
    'Oct':'October',
    'Nov':'November',
    'Dec':'December',

    1:'January'
}

print(months['Jan'])
print(months[1])
print(months.get('Oct'))
print(months.get('Lol'))
print(months.get('Lol','Not a valid key'))