=begin

problem7.rb
 
Aksana Kuzmitskaya
aksana.kuzmitskaya@gmail.com

Find the 10_001st prime number.

=end

def find_prime_place
  place = 0
  i = 2
  while true
    if is_prime(i)
      place += 1
    end
    if place == 10001
      return i
    end
    i +=1 
  end
end

def is_prime(num)
  (2...num).none? do |i|
    num % i == 0
  end
end

# problem7 ==> 104743
