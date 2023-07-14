from manim import *
import numpy as np

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
        
        # Remove from first row

        eliminate_value = Rectangle(height=1, width=1,color = colors[3])
        eliminate_value.set_fill(color=colors[3],opacity=1)
        eliminate_value.move_to(np.array([-5,2,0]))
        self.play(Create(eliminate_value))
        self.play(FadeOut(rectangles1[3]))
        for i in range(4, len(rectangles1)):
            self.play(ApplyMethod(rectangles1[i].shift, LEFT))
            
        self.play(
            FadeOut(eliminate_value),
            run_time=0.5
        )
        
        # Remove from second row
        eliminate_value = Rectangle(height=1, width=1,color = colors2[2])
        eliminate_value.set_fill(color=colors2[2],opacity=1)
        eliminate_value.move_to(np.array([-5,2,0]))
        self.play(Create(eliminate_value))
        self.play(FadeOut(rectangles2[2]))
        for i in range(3, len(rectangles1)):
            self.play(ApplyMethod(rectangles2[i].shift, LEFT))
            
        self.play(
            FadeOut(eliminate_value),
            run_time=0.5
        )

        # Remove frm third row
        eliminate_value = Rectangle(height=1, width=1,color = colors3[1])
        eliminate_value.set_fill(color=colors3[1],opacity=1)
        eliminate_value.move_to(np.array([-5,2,0]))
        self.play(Create(eliminate_value))
        self.play(FadeOut(rectangles3[1]))
        for i in range(2, len(rectangles3)):
            self.play(ApplyMethod(rectangles3[i].shift, LEFT))
            
        self.play(
            FadeOut(eliminate_value),
            run_time=0.5
        )
        self.wait()  # Wait for the animation to complete