from manim import *

class EliminateArrayValue(Scene):
    def construct(self):
        colors = [RED,GREEN,BLUE,YELLOW,WHITE]
        rectangles = VGroup(*[Rectangle(height=1, width=1,color = colors[_]) for _ in range(5)])
        for i, rectangle in enumerate(rectangles):
            rectangle.shift(RIGHT * i)  # Shifting each rectangle to the right
            rectangle.set_fill(color=colors[i],opacity=1)
        # Add the rectangles to the scene
        self.play(Create(rectangles))
        # Remove an element
        self.wait(1)
        for i in range(5):
            self.play(FadeOut(rectangles[4-i]))
            self.wait(1)
            
        self.wait()  # Wait for the animation to complete
