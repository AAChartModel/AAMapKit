//
//  AALegend.h
//  AAMapKitDemo
//
//  Created by An An on 2017/8/2.
//  Copyright © 2017年 An An. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AALegendStyle;
@interface AALegend : NSObject
@property (nonatomic, copy) NSString *orient;
@property (nonatomic, copy) NSString *top;
@property (nonatomic, copy) NSString *left;
@property (nonatomic, strong) NSArray *data;
@property (nonatomic, strong) AALegendStyle *style;
@property (nonatomic, copy) NSString *selectedMode;
@end


@interface AALegendStyle : NSObject
@property (nonatomic, copy) NSString *Color;
@end
