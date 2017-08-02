//
//  AAOptionComposer.m
//  AAMapKitDemo
//
//  Created by An An on 2017/8/2.
//  Copyright © 2017年 An An. All rights reserved.
//

#import "AAOptionComposer.h"

@implementation AAOptionComposer
+(AAOption *)constructTheAAOptionInstanseObject {
    
    NSString *planePath = @"path://M1705.06,1318.313v-89.254l-319.9-221.799l0.073-208.063c0.521-84.662-26.629-121.796-63.961-121.491c-37.332-0.305-64.482,36.829-63.961,121.491l0.073,208.063l-319.9,221.799v89.254l330.343-157.288l12.238,241.308l-134.449,92.931l0.531,42.034l175.125-42.917l175.125,42.917l0.531-42.034l-134.449-92.931l12.238-241.308L1705.06,1318.313z";
    
    
    
    AATitle *title = [[AATitle alloc]init];
    title.text = @"模拟迁徙";
    title.subtext = @"数据纯属虚构";
    title.left = @"center";
    title.textStyle.Color = @"#fff";
    
    AAToolTip *toolTip = [[AAToolTip alloc]init];
    toolTip.trigger = @"item";
    
    AALegend *legend = [[AALegend alloc]init];
    legend.orient = @"vertical";
    legend.top = @"bottom";
    legend.left = @"right";
    legend.data = @[@"北京 Top10", @"上海 Top10", @"广州 Top10"];
    legend.style.Color = @"#fff";
    legend.selectedMode = @"single";
    
    AAGeo *geo = [[AAGeo alloc]init];
    geo.map = @"china";
    geo.label.emphasis.show = false;
    geo.roam = true;
    
    
    
    
    
    AAOption *option = [[AAOption alloc]init];
    option.backgroundColor = @"#404a59";
    return option;
}

@end
