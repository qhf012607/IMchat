//
//  MJRefreshDelegate.h
//  ENTBoostChat
//
//  Created by zhong zf on 16/10/28.
//  Copyright © 2016年 EB. All rights reserved.
//

#ifndef MJRefreshDelegate_h
#define MJRefreshDelegate_h

/**
 * 回调代理类
 */
@protocol MJRefreshDelegate <NSObject>

//执行刷新动作
- (void)headerRereshing;

@end


#endif /* MJRefreshDelegate_h */
