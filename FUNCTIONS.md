All the int Functions for the script


1. forward(t)
   ```
    - moves all 4 corner motors at same speed to move robot forward
    - variable t defines the amount of times to run the for loop
    - X times = X cm
```

2. forwardpressure(t) (NOT USED)
  ```  
    - moves all 4 corner motors at same speed to move robot forward
    - moves both horizontal motors
    - keeps horizontal pressure on object for arm motors 
    - variable t defines the amount of times to run the for loop
    - X times = X cm
```

3. backward(t)
   ```
    - moves all 4 corner motors at same speed to move robot backward
    - variable t defines the amount of times to run the for loop
    - X times = X cm
```

4. backwardpressure(t) (NOT USED)
   ``` 
    - moves all 4 corner motors at same speed to move robot backward
    - moves both horizontal motors
    - keeps horizontal pressure on object for arm motors 
    - variable t defines the amount of times to run the for loop
    - X times = X cm
```

5. right(t)
 ```  
    - moves all corner motors at same speed to rotate the robot right
    - variable t defines the amount of times to run the for loop
    - X times = X degrees
```

6. rightpressure(t) (NOT USED)
 ```  
    - moves all corner motors at same speed to rotate the robot right
    - moves both horizontal motors
    - keeps horizontal pressure on object for arm motors 
    - variable t defines the amount of times to run the for loop
    - X times = X degrees
```

7. left(t)
 ```  
    - moves all corner motors at same speed to rotate the robot left
    - variable t defines the amount of times to run the for loop
    - X times = X degrees
```

8. leftpressure(t) (NOT USED)
 ```  
    - moves all corner motors at same speed to rotate the robot left
    - moves both horizontal motors
    - keeps horizontal pressure on object for arm motors 
    - variable t defines the amount of times to run the for loop
    - X times = X degrees
```

9. up(t)
```
    - moves the C.U.M. and the rest of the arm vertically up 
    - variable t defines the amount of times to run the for loop
    - X times = X cm
```

10. uppressure(t) (NOT USED)
```
    - moves the C.U.M. and the rest of the arm vertically up 
    - moves both horizontal motors
    - keeps horizontal pressure on object for arm motors 
    - variable t defines the amount of times to run the for loop
    - X times = X cm
```

11. down(t)
```
    - moves the C.U.M. and the rest of the arm vertically down
    - variable t defines the amount of times to run the for loop
    - X times = X cm
```

12. downpressure(t) (NOT USED)
```
    - moves the C.U.M. and the rest of the arm vertically down 
    - moves both horizontal motors
    - keeps horizontal pressure on object for arm motors 
    - variable t defines the amount of times to run the for loop
    - X times = X cm
  ```


13.grab(t)

    - moves both horizontal motors
    - keeps horizontal pressure on object for arm motors 
    - variable t defines the amount of times to run the for loop
    - X times = X cm


14.drop(t)

    - moves both horizontal motors
    - drop object in arm motors 
    - variable t defines the amount of times to run the for loop
    - X times = X cm

15.done(t)
    
    - sets all PWM to 0
    - for the end of the script
