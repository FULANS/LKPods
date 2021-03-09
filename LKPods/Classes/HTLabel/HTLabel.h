//
//  HTLabel.h
//  LiemsMobileEnterprise
//
//  Created by zhanghaitao on 2016/12/15.
//  Copyright © 2016年 Jasper. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum
{
    VerticalAlignmentTop = 0,
    VerticalAlignmentMiddle,  // default
    VerticalAlignmentBottom,
} HTVerticalAlignment;

@interface HTLabel : UILabel

@property (nonatomic) HTVerticalAlignment verticalAlignment;

@end
