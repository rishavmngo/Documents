middle = (low + high) / 2; is illegal because pointer can't be added to each other

the right statement should be
middle =  low + (high - low) / 2; 
