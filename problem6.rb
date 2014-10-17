=begin

problem6.rb
 
Aksana Kuzmitskaya
aksana.kuzmitskaya@gmail.com

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

=end

def sum_square_difference 
  sum_of_sq = 0
  sq_of_sum = 0
  (1..100).each do |i|
    sum_of_sq += i**2
    sq_of_sum += i
  end
  sq_of_sum **=2
  
  sq_of_sum - sum_of_sq
end 

# problem6 ==> 25164150
