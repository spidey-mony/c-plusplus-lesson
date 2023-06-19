import turtle

# Set up the turtle

turtle.speed(10)
turtle.penup()
turtle.setposition(-100,0)
turtle.pendown()

#Draw the head 

turtle.circle(25)

#draw the body
turtle.penup()
turtle.setposition(-75,0)
turtle.pendown()
turtle.left(90)
turtle.forward(50)

# Draw the left leg

turtle.penup()
turtle.setposition(-75,-25)
turtle.pendown()
turtle.right(45)
turtle.forward(35)

#Draw the right leg

turtle.penup()
turtle.setposition(-75,25)
turtle.pendown()
turtle.right(45)
turtle.forward(35)

# Draw the right arm

turtle.penup()
turtle.setposition(-75,25)
turtle.pendown()
turtle.left(90)
turtle.forward(35)

# Draw the eyes 

turtle.penup()
turtle.setposition(-87.5,35)
turtle.pendown()
turtle.circle(5)
turtle.penup()
turtle.setposition(-62.5,32)
turtle.pendown()
turtle.circle(5)

# Draw the mouth

turtle.penup()
turtle.setposition(-75,20)
turtle.pendown()
turtle.right(45)
turtle.forward(10)
turtle.left(90)
turtle.forward(10)
turtle.right(45)
turtle.forward(10)

#Hide the turtle

turtle.hideturtle()

# Wait for the user to close the window
turtle.exitonclick()