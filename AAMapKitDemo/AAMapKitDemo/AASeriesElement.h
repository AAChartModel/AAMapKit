//
//  AASeriesElement.h
//  AAMapKitDemo
//
//  Created by An An on 2017/8/2.
//  Copyright © 2017年 An An. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AASeriesElement : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, strong) NSNumber *zlevel;
@end


@interface AASeriesElementEffect : NSObject
@property (nonatomic, assign) BOOL show;
@property (nonatomic, strong) NSNumber *period;
@property (nonatomic, strong) NSNumber *trailLength;
@property (nonatomic, strong) NSNumber *symbol;
@property (nonatomic, strong) NSNumber *symbolSize;
@end


@class AASeriesElementLineStyleNormal;
@interface AASeriesElementLineStyle : NSObject
@property (nonatomic, strong) AASeriesElementLineStyleNormal *normal;
@end


@interface AASeriesElementLineStyleNormal : NSObject
@property (nonatomic, copy) NSString *color;
@property (nonatomic, strong) NSNumber *width;
@property (nonatomic, assign) float curveness;
@end
