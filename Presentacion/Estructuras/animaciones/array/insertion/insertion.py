from manim import *
import numpy as np

class CreateArrayValue(Scene):
    def construct(self):
        colors = [RED,GREEN,BLUE,YELLOW,WHITE]
        rectangles = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(5)])
        for i in range(5):
            rectangles[i].set_fill(color=colors[i],opacity=1)
            rectangles[i].shift(RIGHT * i)
        
        for i in range(5):
            insert_value = Rectangle(height=1, width=1,color = colors[i])
            insert_value.set_fill(color=colors[i],opacity=1)
            insert_value.move_to(np.array([i,2,0]))
            self.play(
                Create(insert_value)
            )
            self.play(
                    ApplyMethod(insert_value.shift,DOWN * 2)
            )
            self.add(rectangles[i])
            self.play(
                FadeOut(insert_value)
            )
                   
        self.wait()  # Wait for the animation to complete