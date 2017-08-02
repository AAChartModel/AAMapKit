//
//  AAMapModel.h
//  AAMapKitDemo
//
//  Created by An An on 2017/8/2.
//  Copyright © 2017年 An An. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger,AAMapModelDataEffectSymbol) {
    AAMapModelDataEffectSymbolCircle = 0,
    AAMapModelDataEffectSymbolRect,
    AAMapModelDataEffectSymbolRoundRect,
    AAMapModelDataEffectSymbolTriangle,
    AAMapModelDataEffectSymbolDiamond,
    AAMapModelDataEffectSymbolPin,
    AAMapModelDataEffectSymbolArrow,
    AAMapModelDataEffectSymbolPlane,
 };

typedef NSString * AATitleLeft;
static AATitleLeft const AATitleftLeft   = @"left";
static AATitleLeft const AATitleftCenter = @"center";
static AATitleLeft const AATitleftRight  = @"right";

@interface AAMapModel : NSObject
@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, copy) NSString *titlesubtext;
@property (nonatomic, copy) NSString *titleleft;
@property (nonatomic, copy) NSString *titleTextStyleColor;
@property (nonatomic, assign) AAMapModelDataEffectSymbol dataEffectSymbol;
@end
