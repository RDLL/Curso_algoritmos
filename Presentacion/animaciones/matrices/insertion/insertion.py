from manim import *
import numpy as np

class CreateMatrixValue(Scene):
    def construct(self):
        colors = [RED,GREEN,BLUE,YELLOW,WHITE]
        colors2 = [GRAY,PURPLE,PINK,MAROON,TEAL]
        colors3 = [GOLD,ORANGE,GRAY_BROWN,PURPLE,PURE_BLUE]
        rectangles1 = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(5)])
        rectangles2 = VGroup(*[Rectangle(height=1, width=1,color = colors2[_]) for _ in range(5)])
        rectangles3 = VGroup(*[Rectangle(height=1, width=1,color = colors3[_]) for _ in range(5)])
        # Move rectangles to position
        for i in range(5):
            rectangles1[i].set_fill(color=colors[i],opacity=1)
            rectangles1[i].move_to(np.array([-3+i,2,0]))
            rectangles2[i].set_fill(color=colors2[i],opacity=1)
            rectangles2[i].move_to(np.array([-3+i,1,0]))
            rectangles3[i].set_fill(color=colors3[i],opacity=1)
            rectangles3[i].move_to(np.array([-3+i,0,0]))
        
        # Create first row
        for i in range(5):
            insert_value = Rectangle(height=1, width=1,color = colors[i])
            insert_value.set_fill(color=colors[i],opacity=1)
            insert_value.move_to(np.array([-5,2,0]))
            self.play(
                Create(insert_value),
                run_time=0.2
            )
            self.play(Create(rectangles1[i]))
            self.play(
                FadeOut(insert_value),
                run_time=0.5
            )
        # Create second row
        for i in range(5):
            insert_value = Rectangle(height=1, width=1,color = colors2[i])
            insert_value.set_fill(color=colors2[i],opacity=1)
            insert_value.move_to(np.array([-5,2,0]))
            self.play(
                Create(insert_value),
                run_time=0.2
            )
            self.play(Create(rectangles2[i]))
            self.play(
                FadeOut(insert_value)
            )
        # Create third row
        for i in range(5):
            insert_value = Rectangle(height=1, width=1,color = colors3[i])
            insert_value.set_fill(color=colors3[i],opacity=1)
            insert_value.move_to(np.array([-5,2,0]))
            self.play(
                Create(insert_value),
                run_time=0.2
            )
            self.play(Create(rectangles3[i]))
            self.play(
                FadeOut(insert_value),
                run_time=0.5
            ) 

        self.wait()  # Wait for the animation to complete