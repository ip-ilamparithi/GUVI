number=gets.strip.to_i
f=0
for i in (2..Math.sqrt(number))
  if n%i==0
    f=1
    break
    end
    end
    if f==1
    puts "NOT A PRIME"
    else
    puts "PRIME NUMBER"
    end
