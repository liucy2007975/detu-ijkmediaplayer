//
//  IJKSDLHudViewCell.h
//  IJKMediaPlayer
//
//  Created by Zhang Rui on 15/12/14.
//  Copyright © 2015年 bilibili. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface IJKSDLHudViewCell : UITableViewCell

- (id)init;

- (void)setHudValue:(NSString *)value forKey:(NSString *)key;

@end