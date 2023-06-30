from manim import *
import numpy as np

class EliminateArray(Scene):
    def construct(self):
        array = [1, 2, 3, 4, 5,6]  # Initial array
        colors = [RED,GREEN,BLUE,YELLOW,WHITE,GRAY]
        indice = Text("indice")
        val = Text("Valor eliminado")
        # Create rectangles to represent array elements
        rectangles = [Rectangle(height=1, width=1) for _ in array]
        valor = Rectangle(height=1, width=1)
        valor.shift(UP*2)
        indice.shift(LEFT * 3)
        val.move_to(np.array([-4,2,0]))
        # Position and arrange the rectangles on the screen
        for i, rectangle in enumerate(rectangles):
            rectangle.shift(RIGHT * i)  # Shifting each rectangle to the right
            rectangle.set_fill(color=colors[i],opacity=1)

        # Add the rectangles to the scene
        self.add(*rectangles,valor,indice,val)

        # Shift the existing rectangles to make room for the new element
        for i, rectangle in enumerate(rectangles[:]):
            x = Text(str(i))
            x.shift(LEFT * 1)
            valor.set_fill(color=colors[i],opacity=1)
            rectangle.set_fill(color=BLACK,opacity=1)
            self.play(
                Write(x),
                run_time = 0.3
            )
            self.play(
                ApplyMethod(valor.shift,RIGHT),  # Shift each existing rectangle to the right
                run_time = 2
            )
            self.play(
                FadeOut(x),
                run_time = 0.3
            )
        self.wait()  # Wait for the animation to complete

#nombre_archivo = "eliminacion.gif"
#exportador = EliminateArray(output_file=nombre_archivo,renderer="PillowRenderer")
#exportador.render(EliminateArray())

