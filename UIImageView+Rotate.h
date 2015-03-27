//
//  UIImageView+Rotate.h
//  Created by Aamer Khalid on 27/03/2015.
//  Copyright (c) 2015 Addil Arif. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIImageView (ImageRotate)
- (void)spinImageWithTime:(CFTimeInterval)inDuration direction:(int)direction;

- (void)spinInfinityImageWithTime:(CFTimeInterval)inDuration direction:(int)direction;
- (void)stopSpinInfinityImage;
@end
