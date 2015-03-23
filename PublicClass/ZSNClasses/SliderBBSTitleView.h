//
//  SliderBBSTitleView.h
//  越野e族
//
//  Created by soulnear on 14-7-3.
//  Copyright (c) 2014年 soulnear. All rights reserved.
//
/*
 顶部导航视图
 */

#import <UIKit/UIKit.h>

typedef void(^SliderBBSTitleViewBlock)(int index);


@interface SliderBBSTitleView : UIView
{
    UIImageView * lineImageView;
    
    SliderBBSTitleViewBlock titleView_block;
    
    int total_pages;
}


//创建视图 
-(void)setAllViewsWith:(NSArray *)array withBlock:(SliderBBSTitleViewBlock)theBlock;

-(void)MyButtonStateWithIndex:(int)index;

@end
