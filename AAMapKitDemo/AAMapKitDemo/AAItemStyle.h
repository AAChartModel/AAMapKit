//
//  AAItemStyle.h
//  AAMapKitDemo
//
//  Created by An An on 2017/8/2.
//  Copyright © 2017年 An An. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AAItemStyleNormal,AAItemStyleEmphasis;
@interface AAItemStyle : NSObject
@property (nonatomic, strong) AAItemStyleNormal *normal;
@property (nonatomic, strong) AAItemStyleEmphasis *emphasis;
@end


@interface AAItemStyleNormal : NSObject
@property (nonatomic, copy) NSString *areaColor;
@property (nonatomic, copy) NSString *borderColor;
@end


@interface AAItemStyleEmphasis : NSObject
@property (nonatomic, copy) NSString *areaColor;
@end
