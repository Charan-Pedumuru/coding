def merge_sort(unsorted):
    if len(unsorted) <= 1:
        return unsorted
    middle = len(unsorted) // 2
    l_list = unsorted[:middle]
    r_list = unsorted[middle:]
    l_list = merge_sort(l_list)
    r_list = merge_sort(r_list)
    return list(merge(l_list, r_list))

def merge(l_half,r_half):
    s = []
    while len(l_half) != 0 and len(r_half)!=0:
        if l_half[0] < r_half[0]:
            s.append(l_half[0])
            l_half.remove(l_half[0])
        else:
            s.append(r_half[0])
            r_half.remove(r_half[0])
    if len(l_half) == 0:
       s = s + r_half
    else:
       s = s + l_half
    return s
    
unsorted = [34, 44, 22, 25, 18, 11]
print(merge_sort(unsorted))