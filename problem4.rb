=begin
=end
def product
  num_one = 999
  num_two = 999
  product = num_one * num_two
  is_palindrome = false
 while is_palindrome == false
 	num_one = 999
    if product.to_s.reverse == product.to_s
  	  while num_one >= 450 
  	    if product % num_one == 0 && product/num_one <= 999
  	    	is_palindrome = true
  	  	  return product
  	    end
  	    num_one -= 1
  	  end
    end
    product -= 1 
  end
end
