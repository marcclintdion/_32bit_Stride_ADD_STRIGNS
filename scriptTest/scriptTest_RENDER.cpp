            shaderNumber = 50;//plastic/rubber/                                                                               
            setupTransforms_MainColor();                                                                                      
    glBindBuffer(GL_ARRAY_BUFFER, scriptTest_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, scriptTest_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------           
    Translate(modelView, scriptTest_POSITION[0], scriptTest_POSITION[1], scriptTest_POSITION[2]);                          
    Rotate(modelView, scriptTest_ROTATE[0], scriptTest_ROTATE[1], scriptTest_ROTATE[2], scriptTest_ROTATE[3]); 

//======================================================================================================                                                       
    SelectShader(shaderNumber);                                                                                                                              
//======================================================================================================                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, scriptTest_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, scriptTest_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);                                                                                                     

