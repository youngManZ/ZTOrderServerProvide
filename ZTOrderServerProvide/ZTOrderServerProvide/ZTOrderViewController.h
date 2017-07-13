//
//  ZTOrderViewController.h
//  ZTOrderServerProvide
//
//  Created by nrh on 2017/7/13.
//  Copyright © 2017年 zt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZTOrderProtocol/ZTOrderProtocol.h> 

@interface ZTOrderViewController : UIViewController

- (UIViewController *) initWithGoodsID : (NSString *) goodID block : (OrderBlock) block;

@end
