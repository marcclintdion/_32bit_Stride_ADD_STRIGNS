                    if(scriptTest_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &scriptTest_NORMALMAP);                                                                                
                            scriptTest_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(scriptTest_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &scriptTest_TEXTUREMAP);                                                                               
                            scriptTest_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(scriptTest_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &scriptTest_VBO);                                                                                       
                            scriptTest_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(scriptTest_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &scriptTest_INDICES_VBO);                                                                               
                            scriptTest_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
