clear all;
numbers=[12, 37, 5, 42, 8, 3];
even=[]; 
odd=[];
% even and odd are empty array

while(length(numbers)>0)
  num=numbers(end);
  numbers(end)=[]; % delete the last element of numbers
  if (mod(num ,2) == 0)
    even=[even, num]; % merge previous even array and new even number
  else
    odd=[odd, num]; % merge previous odd array and new odd number
  end
end

