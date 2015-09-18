        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"scriptTest_DOT3.png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &scriptTest_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, scriptTest_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"scriptTest" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &scriptTest_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, scriptTest_TEXTUREMAP);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------                                                                                                                                  
        #endif                                                                                                                                             
        //========================================================================                                                                                  
        #ifdef __APPLE__                                                                                                                                            
        //--------------                                                                                                                                            
          spriteImage             = [UIImage imageNamed:@"scriptTest_DOT3.png"].CGImage;                                                              
          width                   =  CGImageGetWidth(spriteImage);                                                                                                  
          height                  =  CGImageGetHeight(spriteImage);                                                                                                 
          spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                                                                            
          spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
          CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                                                                                   
          CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                                                                                   
          CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                                                                                   
          CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                                                                         
          CGContextRelease(spriteContext);                                                                                                                          
          //---------                                                                                                                                               
                glGenTextures(1, &scriptTest_NORMALMAP);                                                                                                
                glBindTexture(GL_TEXTURE_2D, scriptTest_NORMALMAP);                                                                                     
          ConfigureAndLoadTexture(spriteData,  width, height);                                                                                                      
          if(spriteData != NULL)                                                                                                                                    
          {                                                                                                                                                         
                  free(spriteData);                                                                                                                                 
          }                                                                                                                                                         
        //----------------------------------------------------------------------------------------------------------                                                
          spriteImage             = [UIImage imageNamed:@"scriptTest.png"].CGImage;                                                                   
          width                   =  CGImageGetWidth(spriteImage);                                                                                                  
          height                  =  CGImageGetHeight(spriteImage);                                                                                                 
          spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                                                                            
          spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
          CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                                                                                   
          CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                                                                                   
          CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                                                                                   
          CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                                                                         
          CGContextRelease(spriteContext);                                                                                                                          
          //---------                                                                                                                                               
          glGenTextures(1, &scriptTest_TEXTUREMAP);                                                                                                     
          glBindTexture(GL_TEXTURE_2D, scriptTest_TEXTUREMAP);                                                                                          
          ConfigureAndLoadTexture(spriteData,  width, height);                                                                                                      
          if(spriteData != NULL)                                                                                                                                    
          {                                                                                                                                                         
                  free(spriteData);                                                                                                                                 
          }                                                                                                                                                         
        //----                                                                                                                                                      
        #endif                                                                                                                                                      
        //========================================================================                                                                                  
        //------------------------------------------------------------------------------------------                                                       
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/scriptTest/scriptTest_DOT3.png",          scriptTest_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/scriptTest/scriptTest.png",               scriptTest_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "scriptTest.cpp"                                                                                                         
        glGenBuffers(1,              &scriptTest_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, scriptTest_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(scriptTest), scriptTest, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "scriptTest_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &scriptTest_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, scriptTest_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(scriptTest_INDICES), scriptTest_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        scriptTest_boundingBox[0] = -1;
        scriptTest_boundingBox[1] = 1;
        scriptTest_boundingBox[2] = -1;
        scriptTest_boundingBox[3] = 1;
        scriptTest_boundingBox[4] = -1;
        scriptTest_boundingBox[5] = 1;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -1;
        collisionBoxArray[boxCount][1] = 1;
        collisionBoxArray[boxCount][2] = -1;
        collisionBoxArray[boxCount][3] = 1;
        collisionBoxArray[boxCount][4] = -1;
        collisionBoxArray[boxCount][5] = 1;
        collisionBoxArray[boxCount][6] = boxCount;
//        boxCount++;
