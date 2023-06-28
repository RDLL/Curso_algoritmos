from manim import *
import numpy as np

class CreateArray(Scene):
    def construct(self):
        array = [1, 2, 3, 4, 5]  # Initial array
        colors = [RED,GREEN,BLUE,YELLOW,WHITE,GRAY]
        indice = Text("indice")
        val = Text("Valor")
        # Create rectangles to represent array elements
        rectangles = [Rectangle(height=1, width=1) for _ in array]
        valor = Rectangle(height=1, width=1)
        valor.shift(UP*2)
        indice.shift(LEFT * 3)
        val.move_to(np.array([-2,2,0]))
        # Position and arrange the rectangles on the screen
        for i, rectangle in enumerate(rectangles):
            rectangle.shift(RIGHT * i)  # Shifting each rectangle to the right

        # Add the rectangles to the scene
        self.add(*rectangles,valor,indice,val)

        # Add a new element to the array
        new_element = 6
        new_rectangle = Rectangle(height=1, width=1)
        new_rectangle.shift(RIGHT * len(array))  # Position the new rectangle

        # Animate the addition of the new element
        self.play(
            FadeIn(new_rectangle),  # Fade in the new rectangle
            run_time=0.5
        )

        array.append(new_element)  # Add the new element to the array
        rectangles.append(new_rectangle)  # Add the new rectangle to the list

        # Shift the existing rectangles to make room for the new element
        for i, rectangle in enumerate(rectangles[:]):
            x = Text(str(i))
            x.shift(LEFT * 1)
            valor.set_fill(color=colors[i],opacity=1)
            rectangle.set_fill(color=colors[i],opacity=1)
            self.play(
                Write(x),
                run_time = 0.3
            )
            self.play(
                ApplyMethod(valor.shift, RIGHT),  # Shift each existing rectangle to the right
                run_time = 2
            )
            self.play(
                FadeOut(x),
                run_time = 0.3
            )
        self.wait()  # Wait for the animation to complete

