from manim import *
import numpy as np

class PopElement(Scene):
    def construct(self):
        colors = [RED,GREEN,BLUE,YELLOW,WHITE]
        rectangles = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(5)])
        tope = Text("Tope")
        max = Text("Max")
        tope.move_to(np.array([-1,2,0]))
        max.move_to(np.array([-5,2,0]))
        for i in range(5):
            rectangles[i].set_fill(color=colors[i],opacity=1)
            rectangles[i].move_to(np.array([-3,-3+i,0]))

        self.add(rectangles,max)

        for i in range(5):
            self.play(tope.animate.shift(DOWN))
            self.play(FadeOut(rectangles[4-i]))
            
        self.wait()  # Wait for the animation to complete