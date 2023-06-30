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
        
        # Add the rectangles to the scene
        # Remove an element
        #removed_val = rectangles[2]
        # Move the removed elemento to up
        #self.play(
        #    ApplyMethod(removed_val.shift,UP * 2),
        #)
        # Remove the element from the scene
        #self.play(
        #    FadeOut(removed_val),    
        #)
        # regroups the rectangles again
        #for i in range(3, len(rectangles)): # 3 is the index that follows after the deleted rectangle
        #    self.play(ApplyMethod(rectangles[i].shift, LEFT))
        # Now with another element
        #removed_val = rectangles[1]
        #self.play(
        #    ApplyMethod(removed_val.shift,UP * 2),
        #)
        #self.play(
        #    FadeOut(removed_val),    
        #)
        #for i in range(3, len(rectangles)): # the same index continues to be applied because it is before the previously eliminated index.
        #    self.play(ApplyMethod(rectangles[i].shift, LEFT))
            
        self.wait()  # Wait for the animation to complete