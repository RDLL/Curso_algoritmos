from manim import *
import numpy as np

class Qeue(Scene):
    def construct(self):
        colors = [RED,GREEN,BLUE,YELLOW,WHITE]
        rectangles = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(5)])
        fin = Text("Final")
        max = Text("Max")
        frente = Text("Frente")
        fin.move_to(np.array([-1,-3,0]))
        max.move_to(np.array([-5,2,0]))
        frente.move_to(np.array([-5,-3,0]))
        for i in range(5):
            rectangles[i].set_fill(color=colors[i],opacity=1)
            rectangles[i].move_to(np.array([-3,-3+i,0]))
        self.add(max,frente)
        for i in range(5):
            self.play(Create(rectangles[i]))
            self.play(fin.animate.shift(UP))
            
        self.wait()  # Wait for the animation to complete