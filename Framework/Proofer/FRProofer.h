//
//  FRProofer.h
//  Greenwich
//
//  Created by Benedict Fritz on 1/27/12.
//  Copyright (c) 2012 FadingRed. All rights reserved.
//

@class FRTranslator;

@interface FRProofer : NSObject

@property (strong, nonatomic) FRTranslator *translator;

- (void)proofFileFromPath:(NSString *)fromPath toPath:(NSString *)toPath;

@end
