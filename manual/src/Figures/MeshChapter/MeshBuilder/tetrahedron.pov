#include "colors.inc"
background { rgb <1, 1, 1> }
camera {location <0, 0, 10>up <0,1,0> right <-1.33,0,0> angle 18look_at <0, 0, 0> sky <0, 1, 0> }
sphere { <0, 0, 0.612372>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
sphere { <-0.288675, -0.5, -0.204124>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
sphere { <-0.288675, 0.5, -0.204124>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
sphere { <0.57735, 0, -0.204124>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
cylinder { <0, 0, 0.612372>, <-0.288675, -0.5, -0.204124>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
cylinder { <0, 0, 0.612372>, <-0.288675, 0.5, -0.204124>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
cylinder { <0, 0, 0.612372>, <0.57735, 0, -0.204124>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
cylinder { <-0.288675, -0.5, -0.204124>, <-0.288675, 0.5, -0.204124>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
cylinder { <-0.288675, -0.5, -0.204124>, <0.57735, 0, -0.204124>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
cylinder { <-0.288675, 0.5, -0.204124>, <0.57735, 0, -0.204124>, 0.025 texture {  pigment { rgb <0.5, 0.5, 0.5> } } }
mesh2 {
vertex_vectors { 12, 
<0, 0, 0.612372>, 
<-0.288675, -0.5, -0.204124>, 
<-0.288675, 0.5, -0.204124>, 
<0, 0, 0.612372>, 
<-0.288675, -0.5, -0.204124>, 
<0.57735, 0, -0.204124>, 
<0, 0, 0.612372>, 
<-0.288675, 0.5, -0.204124>, 
<0.57735, 0, -0.204124>, 
<-0.288675, -0.5, -0.204124>, 
<-0.288675, 0.5, -0.204124>, 
<0.57735, 0, -0.204124>
}
normal_vectors { 12, 
<-0.816496, 0, 0.288675>, 
<-0.816496, 0, 0.288675>, 
<-0.816496, 0, 0.288675>, 
<0.408248, -0.707106, 0.288675>, 
<0.408248, -0.707106, 0.288675>, 
<0.408248, -0.707106, 0.288675>, 
<0.408248, 0.707106, 0.288675>, 
<0.408248, 0.707106, 0.288675>, 
<0.408248, 0.707106, 0.288675>, 
<0, -0, -0.866025>, 
<0, -0, -0.866025>, 
<0, -0, -0.866025>
}
texture_list { 12, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }, 
texture{ pigment{ rgb <0.5, 0.5, 0.5>  } }
}
face_indices { 4, 
<0, 1, 2>,0,1,2, 
<3, 4, 5>,3,4,5, 
<6, 7, 8>,6,7,8, 
<9, 10, 11>,9,10,11, 
}
}
light_source {<10, 10, 10> color White}
light_source {<-10, -10, 10> color White}