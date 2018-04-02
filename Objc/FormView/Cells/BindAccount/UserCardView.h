//
//  UserCardView.h
//  FormView
//
//  Created by xiAo_Ju on 27/03/2018.
//  Copyright © 2018 黄伯驹. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UserCardView;

@protocol UserCardViewActionable <NSObject>

@optional

- (void)userCardView:(UserCardView *)userCardView willTransform:(BOOL)isExpanding;

- (void)userCardView:(UserCardView *)userCardView didTransform:(BOOL)isExpanding;

@end

@class UserCardCellItem;

@class BindStatusView;

@interface UserCardView : UIView

@property (nonatomic, strong, readonly) UIView *wrapperView;

@property (nonatomic, weak) id <UserCardViewActionable> delegate;

@property (nonatomic, assign, readonly) BOOL isExpanding;

- (void)updateViewData:(UserCardCellItem *)viewData;

- (void)setIsExpanding:(BOOL)isExpanding animated:(BOOL)animated;

@end
