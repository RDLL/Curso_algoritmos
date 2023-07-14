from manim import *
import numpy as np

class AnimateRecursividad(Scene):
    def construct(self):
        colors = [RED,GREEN,BLUE,YELLOW,WHITE,GRAY]
        rectangles1 = VGroup(*[Rectangle(height=7-_, width=7-_,color = colors[_]) for _ in range(6)])
    
        # Create first row
        for i in range(6):
            self.play(Create(rectangles1[i]))

        self.wait()  # Wait for the animation to complete