def wave(people):
    temp_wave = [people] * len(people)
    result_wave = []
    iterator_1 = 0
    length = len(temp_wave)
    
    while iterator_1 < length:
        wave_element = list(temp_wave[iterator_1])
        
        if wave_element[iterator_1].isalpha() == True:
            wave_element_upper = wave_element[iterator_1].upper()
            
            for iterator_2 in range(length):
                if iterator_2 == iterator_1:
                    wave_element.pop(iterator_1)
                    wave_element.insert(iterator_1, wave_element_upper)
            
            result_wave.append(''.join(wave_element))
        
        iterator_1 += 1
    
    return result_wave