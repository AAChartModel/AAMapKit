//
//  AATitle.h
//  AAMapKitDemo
//
//  Created by An An on 2017/8/2.
//  Copyright © 2017年 An An. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AATitleStyle;
@interface AATitle : NSObject
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *subtext;
@property (nonatomic, copy) NSString *left;
@property (nonatomic, strong) AATitleStyle *textStyle;
@end


@interface AATitleStyle : NSObject
@property (nonatomic, copy) NSString *Color;
@end
