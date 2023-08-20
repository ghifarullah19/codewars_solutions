def count(s):
    list_s = [None] * len(s)
    
    for i in range(len(list_s)):
        list_s[i] = s[i]
        
    for i in range(len(s)):
        j = i + 1
        while j < len(s):
            if list_s[i] > list_s[j]:
                list_s[i], list_s[j] = list_s[j], list_s[i]
            j += 1
    
    list_s += ' '
    j = 0
    count = 0
    dict_count = {}
    
    for i in range(1, len(list_s)):
        if list_s[i] != list_s[i-1]:
            dict_count[list_s[j]] = count
            temp = list_s[j]
            
            while j < i:
                j += 1
                count += 1
            
            j = i
            dict_count[temp] = count
            count = 0
    
    sorted_values = sorted(dict_count.values(), reverse=True)
    sorted_dict = {}

    for i in sorted_values:
        for k in dict_count.keys():
            if dict_count[k] == i:
                sorted_dict[k] = dict_count[k]

    return sorted_dict