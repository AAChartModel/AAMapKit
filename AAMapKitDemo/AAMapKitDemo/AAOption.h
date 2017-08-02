//
//  AAOption.h
//  AAMapKitDemo
//
//  Created by An An on 2017/8/2.
//  Copyright © 2017年 An An. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AATitle.h"
#import "AAToolTip.h"
#import "AALegend.h"
#import "AAGeo.h"
#import "AASeriesElement.h"
@interface AAOption : NSObject
@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, strong) AATitle *title;
@property (nonatomic, strong) AAToolTip *tooltip;
@property (nonatomic, strong) AALegend *legend;
@property (nonatomic, strong) AAGeo *geo;
@property (nonatomic, strong) NSArray *series;
@end
