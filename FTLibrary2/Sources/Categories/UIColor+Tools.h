//
//  UIColor+Tools.h
//  IGFrameworkProject
//
//  Created by Ondrej Rafaj on 7.6.10.
//  Copyright 2010 Home. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface UIColor (Tools)

+ (UIColor *)colorWithRealRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

- (UIColor *)colorWithRealRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;


+ (UIColor *)randomColor;

+ (UIColor *)randomColorWithAlpha:(CGFloat)alpha;


+ (UIColor *)colorWithHexString:(NSString *)stringToConvert;


+ (UIColor *)alphaPatternImageColorWithSguareSide:(CGFloat)side withColor1:(UIColor *)color1 andColor2:(UIColor *)color2;

+ (UIColor *)alphaPatternImageColorWithSguareSide:(CGFloat)side;

+ (UIColor *)alphaPatternImageColor;

/**
	Shortcut to + (UIColor *)colorWithPatternImage:[UIImage imageNamed:@"name"]]
	@param imageName Name of image
	@returns Pattern color
 */
+ (UIColor *)colorWithPatternImageNamed:(NSString *)imageName;

@end
