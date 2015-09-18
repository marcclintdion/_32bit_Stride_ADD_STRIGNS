       shaderNumber = 47;                                                                                       
       setupTransforms_Shadows();                                                                             
                                                                                                                
       glBindBuffer(GL_ARRAY_BUFFER, scriptTest_VBO);                                               
       glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, scriptTest_INDICES_VBO);                               
       //------------------------------------------------------------------------------------------------------ 
              //---------------------------------------------------------------------------                     
              Translate(LightModelViewMatrix, scriptTest_POSITION[0] * scaleMoveShadows[0],         
                                              scriptTest_POSITION[1] * scaleMoveShadows[1],         
                                              scriptTest_POSITION[2] * scaleMoveShadows[2]);        
              //---------------------------------------------------------------------------                     
              Rotate(LightModelViewMatrix,    scriptTest_ROTATE[0],                                 
                                              scriptTest_ROTATE[1],                                 
                                              scriptTest_ROTATE[2],                                 
                                              scriptTest_ROTATE[3]);                                
       //------------------------------------------------------------------------------------------------------ 
       SelectShader(shaderNumber);                                                                              
       //------------------------------------------------------------------------------------------------------ 
           //-------------------------------------------------------------------------------------------------- 
           glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);                                              
