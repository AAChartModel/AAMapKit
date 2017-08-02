//
//  AAGeo.h
//  AAMapKitDemo
//
//  Created by An An on 2017/8/2.
//  Copyright © 2017年 An An. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AAGeoLabel;
@interface AAGeo : NSObject
@property (nonatomic, copy) NSString *map;
@property (nonatomic, assign) BOOL roam;
@property (nonatomic, strong) AAGeoLabel *label;
@end

@class AAGeoLabelEmphasis;
@interface AAGeoLabel : NSObject
@property (nonatomic, strong) AAGeoLabelEmphasis *emphasis;
@end


@interface AAGeoLabelEmphasis : NSObject
@property (nonatomic, assign) BOOL show;
@end

