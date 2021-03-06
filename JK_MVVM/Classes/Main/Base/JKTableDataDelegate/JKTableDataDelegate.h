//
/*!
 @header UJKTableDataDelegate.h
 
 @abstract  接口适配
 @author Created by zhangjikuan on 2016/9/27.
 
 @version 1.00 2016/9/27 Creation
 
 Copyright © 2016年 zhang_jk. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/*!
 *  配置TableViewCell 的Block
 *
 *  @param indexPath indexPath
 *  @param item      item
 *  @param cell      cell
 */
typedef void(^TableViewCellConfigureBlock)(NSIndexPath *indexPath,id item, UITableViewCell *cell);

/*!
 *  配置选中TableViewCell 的Block
 *
 */
typedef void(^DidSelectCellBlock)(NSIndexPath *indexPath, id item);

/*!
 *  配置TableviewCell 高度的Block
 */
typedef CGFloat(^CellHeightBlock)(NSIndexPath *indexPath, id item);


@class JKBaseViewModel;
@interface JKTableDataDelegate : NSObject<UITableViewDataSource,UITableViewDelegate>

/*!
 * 初始化方法
 */
- (id) initWithSelFriendsDelegate:(JKBaseViewModel *)viewModel
                   cellIdentifier:(NSString *)aIdentifier
               configureCellBlock:(TableViewCellConfigureBlock)aConfigCellBlock
                  cellHeightBlock:(CellHeightBlock)aHeightBlock
                   didSelectBlock:(DidSelectCellBlock)didselectBlock;

/*!
 *  设置UItableView的delegate和datasource为self
 */
- (void)handelTableViewDatasourceAndDelegate:(UITableView *)table;

/*!
 *  获取UITableView中选中的Item所在indexPath
 */
- (id)itemAtIndexPath:(NSIndexPath *)indexPath;

@end
