from manim import *

class DropMatrixValue(Scene):
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

        self.add(rectangles1,rectangles2,rectangles3)
        self.wait(1)
        # Remove an element from the last row
        for i in range(5):
            self.play(FadeOut(rectangles3[4-i]))
        # Remove an element from the second
        for i in range(5):
            self.play(FadeOut(rectangles2[4-i]))
        # Remove an element from the firs row
        for i in range(5):
            self.play(FadeOut(rectangles1[4-i]))
        self.wait()  # Wait for the animation to complete
